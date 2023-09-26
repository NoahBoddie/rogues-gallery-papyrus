#pragma once
namespace NEB
{
	using SkyrimVM = RE::BSScript::IVirtualMachine;

	struct Papyrus
	{
		static bool Install(SkyrimVM* a_vm);

		static std::vector<RE::TESForm*> GetAssociatedMenuForm(SkyrimVM* a_vm, RE::VMStackID a_stackID, RE::StaticFunctionTag*,
			RE::BSFixedString a_menu);


		static std::vector<int32_t> GetVersion(SkyrimVM* a_vm, RE::VMStackID a_stackID, RE::StaticFunctionTag*);


		//TODO:Would like to add OpenContainerMenu that allows for menu mode, so long as it's viable for the given menu.
	};
}