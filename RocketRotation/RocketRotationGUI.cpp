#include "pch.h"
#include "RocketRotation.h"

/* Plugin Settings Window code here
std::string RocketRotation::GetPluginName() {
	return "RocketRotation";
}

void RocketRotation::SetImGuiContext(uintptr_t ctx) {
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Render the plugin settings here
// This will show up in bakkesmod when the plugin is loaded at
//  f2 -> plugins -> RocketRotation
void RocketRotation::RenderSettings() {
	ImGui::TextUnformatted("RocketRotation plugin settings");
}
*/

/*
// Do ImGui rendering here
void RocketRotation::Render()
{
	if (!ImGui::Begin(menuTitle_.c_str(), &isWindowOpen_, ImGuiWindowFlags_None))
	{
		// Early out if the window is collapsed, as an optimization.
		ImGui::End();
		return;
	}

	ImGui::End();

	if (!isWindowOpen_)
	{
		cvarManager->executeCommand("togglemenu " + GetMenuName());
	}
}

// Name of the menu that is used to toggle the window.
std::string RocketRotation::GetMenuName()
{
	return "rocketrotation";
}

// Title to give the menu
std::string RocketRotation::GetMenuTitle()
{
	return menuTitle_;
}

// Don't call this yourself, BM will call this function with a pointer to the current ImGui context
void RocketRotation::SetImGuiContext(uintptr_t ctx)
{
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Should events such as mouse clicks/key inputs be blocked so they won't reach the game
bool RocketRotation::ShouldBlockInput()
{
	return ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantCaptureKeyboard;
}

// Return true if window should be interactive
bool RocketRotation::IsActiveOverlay()
{
	return true;
}

// Called when window is opened
void RocketRotation::OnOpen()
{
	isWindowOpen_ = true;
}

// Called when window is closed
void RocketRotation::OnClose()
{
	isWindowOpen_ = false;
}
*/
