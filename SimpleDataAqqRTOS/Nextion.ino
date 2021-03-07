void CPAP_startPushCallback(void *ptr)
{
  StartCPAP = true;
  StartBiPAP = false;
  PrintNex = 269;
  c_inhale.getValue(&inhale_value);
  c_exhale.getValue(&exhale_value);
  c_pressure.getValue(&pressure_value);
  c_bpm.getValue(&bpm_value);
  Serial.print("StartCPAP: ");
  Serial.print(StartCPAP);
  Serial.print("  ");
  Serial.print("StartBiPAP: ");
  Serial.print(StartBiPAP);
  Serial.print("  ");
  Serial.print("inhale: ");
  Serial.print(inhale_value);
  Serial.print("  ");
  Serial.print("exhale: ");
  Serial.print(exhale_value);
  Serial.print("  ");
  Serial.print("pressure: ");
  Serial.print(pressure_value);
  Serial.print("  ");
  Serial.print("BPM: ");
  Serial.print(bpm_value);
  Serial.println();
}

void BiPAP_startPushCallback(void *ptr)
{
  //  display_mode_counter = 2;
  StartBiPAP = true;
  StartCPAP = false;
  PrintNex = 269;
  b_inhale.getValue(&inhale_value);
  b_exhale.getValue(&exhale_value);
  b_pressure.getValue(&pressure_value);
  b_bpm.getValue(&bpm_value);
  peep_speed.getValue(&peep_speed_value);
  tidal_volume.getValue(&tidal_volume_value);
  Serial.print("StartCPAP: ");
  Serial.print(StartCPAP);
  Serial.print("  ");
  Serial.print("StartBiPAP: ");
  Serial.print(StartBiPAP);
  Serial.print("  ");;
  Serial.print("inhale: ");
  Serial.print(inhale_value);
  Serial.print("  ");
  Serial.print("exhale: ");
  Serial.print(exhale_value);
  Serial.print("  ");
  Serial.print("pressure: ");
  Serial.print(pressure_value);
  Serial.print("  ");
  Serial.print("BPM: ");
  Serial.print(bpm_value);
  Serial.print("  ");
  Serial.print("Tidal_volume: ");
  Serial.print(tidal_volume_value);
  Serial.print("  ");
  Serial.print("PEEP: ");
  Serial.print(peep_speed_value);
  Serial.println();
}

void CMV_startPushCallback(void *ptr)
{
  //  display_mode_counter = 3;
  cmv_inhale.getValue(&inhale_value);
  cmv_exhale.getValue(&exhale_value);
  cmv_pressure.getValue(&pressure_value);
  cmv_bpm.getValue(&bpm_value);
  cmv_peep_speed.getValue(&peep_speed_value);
  cmv_flow.getValue(&flow_value);
  cmv_fio2.getValue(&fio2_value);
  cmv_tidal_volume.getValue(&tidal_volume_value);
  Serial.print("inhale: ");
  Serial.print(inhale_value);
  Serial.print("  ");
  Serial.print("exhale: ");
  Serial.print(exhale_value);
  Serial.print("  ");
  Serial.print("pressure: ");
  Serial.print(pressure_value);
  Serial.print("  ");
  Serial.print("BPM: ");
  Serial.print(bpm_value);
  Serial.print("  ");
  Serial.print("Tidal_volume: ");
  Serial.print(tidal_volume_value);
  Serial.print("  ");
  Serial.print("PEEP: ");
  Serial.print(peep_speed_value);
  Serial.println();
}
