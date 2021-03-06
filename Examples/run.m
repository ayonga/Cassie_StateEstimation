%% Add Paths
clear; matlabrc; restoredefaultpath; clc;
addpath('../');
addpath_Cassie_StateEstimation; % Add paths needed for RIEKF
addpath(genpath('../../agility-cassie-doc/Software')); % Agility Robotics Code 
addpath(genpath('gen/')); % Add generated code for kinematics

%% Open simulation
model = 'example_RIEKF';
open(model);

%% Run 
sim(model)

%% Plot results
load('mat/true_state.mat')
plot_results;