int inspiratory_sensor = 0;
int expiratory_sensor = 0;

// Sensors
float inspiratory_sensor_data = 0;
float expiratory_sensor_data = 0;
float inspiratory_flow_sensor_data = 0;
float expiratory_flow_sensor_data = 0;

//Offsets And Scales
float scale = 256.0;

uint32_t inhale_value = 1;
uint32_t exhale_value = 4;
uint32_t pressure_value = 0;
uint32_t bpm_value = 12;
uint32_t flow_value = 0;
uint32_t fio2_value = 21;
uint32_t tidal_volume_value = 350;
uint32_t peep_speed_value = 5;
// int display_mode_counter = 0;

//Start flags for Modes

static bool StartCPAP = false;
static bool StartBiPAP = false;

//Flags for BiPAP and CMV
bool inhale_is_running = false;
bool exhale_is_running = false;

//BiPAP
float inhale_time = 1;
float exhale_time = 4;

// NexLoop Flag
int32_t PrintNex = 268;

//CPAP Parameters
NexNumber c_inhale = NexNumber(2, 6, "cp_inhale");
NexNumber c_exhale = NexNumber(2, 8, "cp_exhale");
NexNumber c_pressure = NexNumber(2, 10, "cp_pressure");
NexNumber c_bpm = NexNumber(2, 7, "cp_bpm");
NexNumber c_flow = NexNumber(3, 9, "flow");
NexNumber c_pressure_feedback = NexNumber(3, 8, "ps");
NexHotspot CPAP_start = NexHotspot(2, 11, "cpap_start");

//CPAP graph page
NexWaveform cpap_pressure_wave = NexWaveform(3, 3, "cpap_pressure");
NexWaveform cpap_flow_wave = NexWaveform(3, 4, "cpap_flow_rate");

//BiPAP Parameters
NexNumber b_inhale = NexNumber(4, 12, "b_inhale");
NexNumber b_exhale = NexNumber(4, 13, "b_exhale");
NexNumber b_pressure = NexNumber(4, 7, "b_pressure");
NexNumber b_bpm = NexNumber(4, 8, "b_bpm");
NexNumber tidal_volume = NexNumber(4, 1, "b_tidal_vol");
NexNumber peep_speed = NexNumber(4, 10, "b_peep");
NexNumber tidal_volume_feedback = NexNumber(5, 8, "tv");
NexNumber b_pressure_feedback = NexNumber(5, 10, "ps");
NexNumber b_flow = NexNumber(5, 11, "b_flow");
NexHotspot BiPAP_start = NexHotspot(4, 15, "bipap_start");

//BiPAP graph
NexWaveform bipap_pressure_wave = NexWaveform(5, 4, "bipap_pressure");
NexWaveform bipap_volume_wave = NexWaveform(5, 2, "bipap_volume");
NexWaveform bipap_flow_wave = NexWaveform(5, 3, "bipap_flow");


//cmv parameters
NexNumber cmv_inhale = NexNumber(6, 3, "c_inhale");
NexNumber cmv_exhale = NexNumber(6, 5, "c_exhale");
NexNumber cmv_pressure = NexNumber(6, 11, "c_Psupp");
NexNumber cmv_bpm = NexNumber(6, 7, "c_bpm");
NexNumber cmv_tidal_volume = NexNumber(6, 9, "c_tidal_vol");
NexNumber cmv_peep_speed = NexNumber(6, 13, "c_peep");
NexNumber cmv_fio2 = NexNumber(6, 18, "c_Fio2");
NexNumber cmv_flow = NexNumber(6, 19, "c_flow");
NexHotspot CMV_start = NexHotspot(6, 14, "cmv_start");
NexNumber cmv_tidal_volume_feedback = NexNumber(7, 8, "tv");
NexNumber cmv_pressure_feedback = NexNumber(7, 11, "psp");
NexNumber cmv_flow_feedback = NexNumber(7, 12, "cmv_fl");

//CMV Graph Variables
NexWaveform cmv_pressure_wave = NexWaveform(7, 4, "cmv_pr_wave");
NexWaveform cmv_volume_wave = NexWaveform(7, 5, "cmv_vol_wave");
NexWaveform cmv_flow_wave = NexWaveform(7, 6, "cmv_flow");

NexTouch *nex_listen_list[] =
{
  &CPAP_start,
  &BiPAP_start,
  &CMV_start,
  NULL
};
