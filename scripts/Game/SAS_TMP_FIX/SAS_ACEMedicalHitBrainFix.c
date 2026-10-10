modded class SCR_CharacterDamageManagerComponent : SCR_DamageManagerComponent
{
	override void ACE_Medical_UpdateResilienceRegenScale()
	{
		if (!GetGame() || !GetGame().InPlayMode())
			return;

		if (!s_ACE_Medical_Core_Settings)
			s_ACE_Medical_Core_Settings = ACE_SettingsHelperT<ACE_Medical_Core_Settings>.GetModSettings();

		if (!m_pBloodHitZone || !m_ACE_Medical_BrainHitZone)
		{
			if (s_ACE_Medical_Core_Settings)
				m_fACE_Medical_ResilienceRegenScale = s_ACE_Medical_Core_Settings.m_fDefaultResilienceRegenScale;

			return;
		}

		super.ACE_Medical_UpdateResilienceRegenScale();
	}
}