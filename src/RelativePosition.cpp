#include "RelativePosition.hpp"
#include "Utils.hpp"

namespace ImGuiGradient {

auto make_relative_position(float position, WrapMode wrap_mode) -> RelativePosition
{
    return [&] {
        switch (wrap_mode)
        {
        case WrapMode::Clamp:
        {
            return internal::clamp(position);
        }
        case WrapMode::Repeat:
        {
            return internal::repeat_position(position);
        }
        case WrapMode::MirrorRepeat:
        {
            return internal::mirror_repeat_position(position);
        }
        default:
            assert(false && "[RelativePosition::make_relative_position] Invalid enum value");
            return RelativePosition{0.f};
        }
    }();
}

auto RelativePosition::imgui_widget(const char* label, const float width) -> bool
{
    ImGui::SetNextItemWidth(width);
    return ImGui::DragFloat(
        label,
        &value,
        .0001f,   /* speed */
        0.f, 1.f, /* min and max */
        "%.4f",   /* precision */
        ImGuiSliderFlags_AlwaysClamp
    );
}

} // namespace ImGuiGradient