%% Set sample times 

cassieParameters = CassieParameters;

EKF_SampleTime = 1/2000;
Pose_UDP_SampleTime = 1/2000;
IMU_UDP_SampleTime = 1/2000;
JointState_UDP_SampleTime = 1/2000;
Radio_UDP_SampleTime = 1/2000;
Contact_UDP_SampleTime = 1/2000;
Time_UDP_SampleTime = 1/2000;

%% EKF Parameters

% Enable bias estimation and measurement updates
enable_bias_estimation = false;
static_bias_initialization = false;
ekf_update_enabled = true;

% Set inital IMU biases
gyro_bias_init = [0;0;0];
accel_bias_init = [0;0;0];

% Set gyroscope noise std
gyro_noise_std = 0.002*ones(3,1); 
gyro_bias_noise_std = 0.001*ones(3,1);

% Set accelerometer noise std
accel_noise_std = 0.04*ones(3,1); 
accel_bias_noise_std = 0.001*ones(3,1);

% Set contact and encoder noise std
contact_noise_std = 0.05*ones(3,1);
encoder_noise_std = deg2rad(0.5)*ones(14,1); 

% Priors
prior_base_pose_std = 0.01*ones(6,1);
prior_base_velocity_std = 0.1*ones(3,1);
prior_contact_position_std = 0.1*ones(3,1);
prior_gyro_bias_std = 0.01*ones(3,1);
prior_accel_bias_std = 0.05*ones(3,1);
prior_forward_kinematics_std = 0.01*ones(3,1);