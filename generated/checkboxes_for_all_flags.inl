/* -----------------------------------------------------------------------------
 * This file was automatically generated by a Python script.
 * PLEASE DON'T EDIT IT DIRECTLY, your changes would be overwritten the next time the script is run.
 * Instead, go to "generate_flags_checkbox.py" and edit the "checkboxes_for_all_flags" function there.
 * -----------------------------------------------------------------------------
 */

#include <imgui/imgui.h>
#include "../src/Flags.hpp"

auto checkboxes_for_all_flags() -> ImGuiGradient::Flags
{
    ImGuiGradient::Flags options = ImGuiGradient::Flag::None;

    static auto isNone = false;
    ImGui::Checkbox("ImGuiGradient::Flag::None", &isNone);
    if (isNone)
    {
        options |= ImGuiGradient::Flag::None;
    }

    static auto isNoTooltip = false;
    ImGui::Checkbox("ImGuiGradient::Flag::NoTooltip", &isNoTooltip);
    if (isNoTooltip)
    {
        options |= ImGuiGradient::Flag::NoTooltip;
    }

    static auto isNoResetButton = false;
    ImGui::Checkbox("ImGuiGradient::Flag::NoResetButton", &isNoResetButton);
    if (isNoResetButton)
    {
        options |= ImGuiGradient::Flag::NoResetButton;
    }

    static auto isNoLabel = false;
    ImGui::Checkbox("ImGuiGradient::Flag::NoLabel", &isNoLabel);
    if (isNoLabel)
    {
        options |= ImGuiGradient::Flag::NoLabel;
    }

    static auto isNoAddButton = false;
    ImGui::Checkbox("ImGuiGradient::Flag::NoAddButton", &isNoAddButton);
    if (isNoAddButton)
    {
        options |= ImGuiGradient::Flag::NoAddButton;
    }

    static auto isNoRemoveButton = false;
    ImGui::Checkbox("ImGuiGradient::Flag::NoRemoveButton", &isNoRemoveButton);
    if (isNoRemoveButton)
    {
        options |= ImGuiGradient::Flag::NoRemoveButton;
    }

    static auto isNoPositionSlider = false;
    ImGui::Checkbox("ImGuiGradient::Flag::NoPositionSlider", &isNoPositionSlider);
    if (isNoPositionSlider)
    {
        options |= ImGuiGradient::Flag::NoPositionSlider;
    }

    static auto isNoColorEdit = false;
    ImGui::Checkbox("ImGuiGradient::Flag::NoColorEdit", &isNoColorEdit);
    if (isNoColorEdit)
    {
        options |= ImGuiGradient::Flag::NoColorEdit;
    }

    static auto isNoDragDownToDelete = false;
    ImGui::Checkbox("ImGuiGradient::Flag::NoDragDownToDelete", &isNoDragDownToDelete);
    if (isNoDragDownToDelete)
    {
        options |= ImGuiGradient::Flag::NoDragDownToDelete;
    }

    static auto isNoBorder = false;
    ImGui::Checkbox("ImGuiGradient::Flag::NoBorder", &isNoBorder);
    if (isNoBorder)
    {
        options |= ImGuiGradient::Flag::NoBorder;
    }

    static auto isNoAddAndRemoveButtons = false;
    ImGui::Checkbox("ImGuiGradient::Flag::NoAddAndRemoveButtons", &isNoAddAndRemoveButtons);
    if (isNoAddAndRemoveButtons)
    {
        options |= ImGuiGradient::Flag::NoAddAndRemoveButtons;
    }

    static auto isNoMarkOptions = false;
    ImGui::Checkbox("ImGuiGradient::Flag::NoMarkOptions", &isNoMarkOptions);
    if (isNoMarkOptions)
    {
        options |= ImGuiGradient::Flag::NoMarkOptions;
    }

    return options;
}