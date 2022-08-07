#pragma once

#include "Gradient.hpp"

namespace ImGuiGradient {

void Gradient::sort_marks()
{
    _marks.sort([](const Mark& a, const Mark& b) { return a.position < b.position; });
}

auto Gradient::add_mark(const Mark& mark) -> Mark&
{
    _marks.push_back(mark);
    Mark& reference = _marks.back();
    sort_marks();
    return reference;
}
void Gradient::remove_mark(const Mark& mark)
{
    _marks.remove(mark);
}

auto Gradient::get_marks() const -> const std::list<Mark>&
{
    return _marks;
}

void Gradient::set_mark_position(Mark& mark, const RelativePosition position) // TODO(ASG) Gradient methods wich does not use _marks
{
    mark.position.set(position.get());
    sort_marks();
}

auto Gradient::is_empty() -> bool
{
    return _marks.empty();
}

void Gradient::set_mark_color(Mark& mark, const ColorRGBA color) // TODO(ASG) Gradient methods wich does not use _marks
{
    mark.color = color;
}

auto Gradient::get_marks_surrounding(const RelativePosition position) const -> internal::SurroundingMarks
{
    const Mark* lower{nullptr}; /// First mark positionned before `position`, or nullptr if there is none.
    const Mark* upper{nullptr}; /// First mark positionned after `position`, or nullptr if there is none.
    for (const Mark& mark : _marks)
    {
        if (mark.position > position &&
            (!upper || mark.position < upper->position))
        {
            upper = &mark;
        }
        if (mark.position < position &&
            (!lower || mark.position > lower->position))
        {
            lower = &mark;
        }
    }
    return internal::SurroundingMarks{lower, upper};
}

auto Gradient::compute_color_at(const RelativePosition position) const -> ColorRGBA
{
    const auto        surrounding_marks = get_marks_surrounding(position);
    const Mark* const lower{surrounding_marks.lower};
    const Mark* const upper{surrounding_marks.upper};

    if (!lower && !upper)
    {
        return ColorRGBA{0.f, 0.f, 0.f, 1.f};
    }
    else if (upper && !lower)
    {
        return upper->color;
    }
    else if (!upper && lower)
    {
        return lower->color;
    }
    else if (upper == lower)
    {
        return upper->color;
    }
    else
    {
        const float mix_factor = (position.get() - lower->position.get()) /
                                 (upper->position.get() - lower->position.get());
        return ImLerp(
            lower->color,
            upper->color,
            mix_factor
        );
    }
};

} // namespace ImGuiGradient
