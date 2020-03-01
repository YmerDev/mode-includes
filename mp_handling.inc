
/*
	SA-MP Adaptation Handling Plugin v1.4
	Vladimir Sergeenko, 2017
*/

enum e_handling_id
{
	hd_mass, // float
	hd_turn_mass, // float
	hd_drag_coeff, // float
	hd_center_of_mass_x, // float
	hd_center_of_mass_y, // float
	hd_center_of_mass_z, // float
	hd_percent_submerged, // int
	hd_traction_multiplier, // float
	hd_traction_loss, // float
	hd_traction_bias, // float
	hd_number_of_gears, // int
	hd_max_velocity, // float
	hd_engine_acceleration, // float
	hd_engine_inertia, // float
	hd_drive_type, // int (0 - F, 1 - R, 2 - 4)
	hd_engine_type, // int (0 - P, 1 - D, 2 - E)
	hd_brake_deceleration, // float
	hd_brake_bias, // float
	hd_abs, // int (0/1)
	hd_steering_lock, // float
	hd_suspension_force_level, // float
	hd_suspension_damping_level, // float
	hd_suspension_high_speed, // float
	hd_suspension_upper_limit, // float
	hd_suspension_lower_limit, // float
	hd_suspension_bias_between_fr, // float
	hd_suspension_anti_div_mult, // float
	hd_seat_offset_distance, // float
	hd_collision_damage_mult, // float
	hd_model_flags, // int
	hd_handling_flags, // int
	hd_head_light, // int
	hd_tail_light, // int
	hd_anim_group, // int
	hd_wheel_scale, // float
};

// Get the default value for the model
native GetDefaultHandlingInt(model_id, e_handling_id:param_id, &value);
native GetDefaultHandlingFloat(model_id, e_handling_id:param_id, &Float:value);

// Get the value of the specified vehicle
native GetVehicleHandlingInt(vehicleid, e_handling_id:param_id, &value);
native GetVehicleHandlingFloat(vehicleid, e_handling_id:param_id, &Float:value);

// Set the value for the specified vehicle
native SetVehicleHandlingInt(vehicleid, e_handling_id:param_id, value);
native SetVehicleHandlingFloat(vehicleid, e_handling_id:param_id, Float:value);