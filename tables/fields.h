    {"classname", FOFS(classname), F_LSTRING},
    {"model", FOFS(model), F_LSTRING},
    {"spawnflags", FOFS(spawnflags), F_INT},
    {"speed", FOFS(speed), F_FLOAT},

    //Knightmare- movetype backup
    {"oldmovetype", FOFS(oldmovetype), F_INT},
    {"relative_velocity", FOFS(relative_velocity), F_VECTOR}, 	//relative velocity
    {"relative_avelocity", FOFS(relative_avelocity), F_VECTOR}, //relative angular velocity
    {"oldvelocity", FOFS(oldvelocity), F_VECTOR}, //relative angular velocity
    //Knightmare- rotating train stuff
    {"movewith_set", FOFS(movewith_set), F_INT},
    {"bounce_me", FOFS(bounce_me), F_INT},
    {"in_mud", FOFS(in_mud), F_INT},

    {"width", FOFS(width), F_FLOAT},	//Knightmare- these are needed to update func_door_secret's positions
    {"length", FOFS(length), F_FLOAT},
    {"side", FOFS(side), F_FLOAT},

    {"move_origin", FOFS(move_origin), F_VECTOR}, //relative angular velocity
    {"org_angles", FOFS(org_angles), F_VECTOR},
    {"deploy_angles", FOFS(deploy_angles), F_VECTOR},
    {"aim_point", FOFS(aim_point), F_VECTOR},

    {"ideal_pitch", FOFS(ideal_pitch), F_FLOAT},
    {"ideal_yaw", FOFS(ideal_yaw), F_FLOAT},
    {"ideal_roll", FOFS(ideal_roll), F_FLOAT},

    //Knightmare- misc ent stuff
    {"common_name", FOFS(common_name), F_LSTRING},
    {"newteam", FOFS(newteam), F_LSTRING},
    {"musictrack", FOFS(musictrack), F_LSTRING},
    {"movedir", FOFS(movedir), F_VECTOR},

    {"distance", FOFS(distance), F_FLOAT},
    {"lip", FOFS(lip), F_INT},
    {"height", FOFS(height), F_INT},
    {"shift", FOFS(shift), F_FLOAT},

    {"last_attacked_framenum", FOFS(last_attacked_framenum), F_INT},
    //Knightmare

    {"accel", FOFS(accel), F_FLOAT},
    {"decel", FOFS(decel), F_FLOAT},
    {"target", FOFS(target), F_LSTRING},
    {"targetname", FOFS(targetname), F_LSTRING},
    {"pathtarget", FOFS(pathtarget), F_LSTRING},
    {"deathtarget", FOFS(deathtarget), F_LSTRING},
    {"killtarget", FOFS(killtarget), F_LSTRING},
    {"combattarget", FOFS(combattarget), F_LSTRING},
    {"message", FOFS(message), F_LSTRING},
    {"key_message", FOFS(key_message), F_LSTRING}, //Knightmare added
    {"team", FOFS(team), F_LSTRING},
    {"wait", FOFS(wait), F_FLOAT},
    {"delay", FOFS(delay), F_FLOAT},
    {"random", FOFS(random), F_FLOAT},
    {"starttime", FOFS(starttime), F_FLOAT},
    {"endtime", FOFS(endtime), F_FLOAT},
    {"move_origin", FOFS(move_origin), F_VECTOR},
    {"move_angles", FOFS(move_angles), F_VECTOR},
    {"style", FOFS(style), F_INT},
    {"count", FOFS(count), F_INT},

    {"touch_debounce_time", FOFS(touch_debounce_time), F_FLOAT}, //Knightmare added
    {"pain_debounce_time", FOFS(pain_debounce_time), F_FLOAT},
    {"damage_debounce_time", FOFS(damage_debounce_time), F_FLOAT},
    {"gravity_debounce_time", FOFS(gravity_debounce_time), F_FLOAT},
    {"fly_sound_debounce_time", FOFS(fly_sound_debounce_time), F_FLOAT},
    {"last_move_time", FOFS(last_move_time), F_FLOAT},
    {"last_fire_time", FOFS(last_fire_time), F_FLOAT},

    {"health", FOFS(health), F_INT},
    {"base_health", FOFS(health), F_INT},
    {"sounds", FOFS(sounds), F_INT},
    {"light", 0, F_IGNORE},
    {"dmg", FOFS(dmg), F_INT},
    {"mass", FOFS(mass), F_INT},
    {"volume", FOFS(volume), F_FLOAT},
    {"attenuation", FOFS(attenuation), F_FLOAT},
    {"map", FOFS(map), F_LSTRING},
    {"origin", FOFS(s.origin), F_VECTOR},
    {"angles", FOFS(s.angles), F_VECTOR},
    {"angle", FOFS(s.angles), F_ANGLEHACK},
    // Knightmare- hack for setting alpha, allows mappers to specify
    // an entity's alpha value with the key "salpha"
    #ifdef KMQUAKE2_ENGINE_MOD
    {"salpha", FOFS(s.alpha), F_FLOAT},
    #endif

    {"aiflags", FOFS(monsterinfo.aiflags), F_INT},
    {"moreaiflags", FOFS(monsterinfo.moreaiflags), F_INT},
    {"goalentity", FOFS(goalentity), F_EDICT, FFL_NOSPAWN},
    {"movetarget", FOFS(movetarget), F_EDICT, FFL_NOSPAWN},
    {"enemy", FOFS(enemy), F_EDICT, FFL_NOSPAWN},
    {"oldenemy", FOFS(oldenemy), F_EDICT, FFL_NOSPAWN},
    {"activator", FOFS(activator), F_EDICT, FFL_NOSPAWN},
    {"groundentity", FOFS(groundentity), F_EDICT, FFL_NOSPAWN},
    {"teamchain", FOFS(teamchain), F_EDICT, FFL_NOSPAWN},
    {"teammaster", FOFS(teammaster), F_EDICT, FFL_NOSPAWN},
    {"owner", FOFS(owner), F_EDICT, FFL_NOSPAWN},
    {"mynoise", FOFS(mynoise), F_EDICT, FFL_NOSPAWN},
    {"mynoise2", FOFS(mynoise2), F_EDICT, FFL_NOSPAWN},
    {"target_ent", FOFS(target_ent), F_EDICT, FFL_NOSPAWN},
    {"from", FOFS(from), F_EDICT, FFL_NOSPAWN}, //Knightmare added
    {"to", FOFS(to), F_EDICT, FFL_NOSPAWN}, //Knightmare added
    {"inflictor", FOFS(inflictor), F_EDICT, FFL_NOSPAWN}, //Knightmare added
    {"attacker", FOFS(attacker), F_EDICT, FFL_NOSPAWN}, //Knightmare added

    {"chain", FOFS(chain), F_EDICT, FFL_NOSPAWN},

    {"prethink", FOFS(prethink), F_FUNCTION, FFL_NOSPAWN},
    {"think", FOFS(think), F_FUNCTION, FFL_NOSPAWN},
    {"postthink", FOFS(postthink), F_FUNCTION, FFL_NOSPAWN}, //Knightmare added
    {"blocked", FOFS(blocked), F_FUNCTION, FFL_NOSPAWN},
    {"touch", FOFS(touch), F_FUNCTION, FFL_NOSPAWN},
    {"use", FOFS(use), F_FUNCTION, FFL_NOSPAWN},
    {"pain", FOFS(pain), F_FUNCTION, FFL_NOSPAWN},
    {"die", FOFS(die), F_FUNCTION, FFL_NOSPAWN},
    {"play", FOFS(play), F_FUNCTION, FFL_NOSPAWN},

    {"stand", FOFS(monsterinfo.stand), F_FUNCTION, FFL_NOSPAWN},
    {"idle", FOFS(monsterinfo.idle), F_FUNCTION, FFL_NOSPAWN},
    {"search", FOFS(monsterinfo.search), F_FUNCTION, FFL_NOSPAWN},
    {"walk", FOFS(monsterinfo.walk), F_FUNCTION, FFL_NOSPAWN},
    {"run", FOFS(monsterinfo.run), F_FUNCTION, FFL_NOSPAWN},
    {"dodge", FOFS(monsterinfo.dodge), F_FUNCTION, FFL_NOSPAWN},
    {"attack", FOFS(monsterinfo.attack), F_FUNCTION, FFL_NOSPAWN},
    {"melee", FOFS(monsterinfo.melee), F_FUNCTION, FFL_NOSPAWN},
    {"sight", FOFS(monsterinfo.sight), F_FUNCTION, FFL_NOSPAWN},
    {"jump", FOFS(monsterinfo.jump), F_FUNCTION, FFL_NOSPAWN},

    {"checkattack", FOFS(monsterinfo.checkattack), F_FUNCTION, FFL_NOSPAWN},
    {"currentmove", FOFS(monsterinfo.currentmove), F_MMOVE, FFL_NOSPAWN},

    {"endfunc", FOFS(moveinfo.endfunc), F_FUNCTION, FFL_NOSPAWN},

    // temp spawn vars -- only valid when the spawn function is called
    {"lip", STOFS(lip), F_INT, FFL_SPAWNTEMP},
    {"distance", STOFS(distance), F_INT, FFL_SPAWNTEMP},
    {"height", STOFS(height), F_INT, FFL_SPAWNTEMP},
    {"noise", STOFS(noise), F_LSTRING, FFL_SPAWNTEMP},
    {"pausetime", STOFS(pausetime), F_FLOAT, FFL_SPAWNTEMP},
    {"item", STOFS(item), F_LSTRING, FFL_SPAWNTEMP},
    {"phase", STOFS(phase), F_FLOAT, FFL_SPAWNTEMP},
    {"shift", STOFS(shift), F_FLOAT, FFL_SPAWNTEMP},

    //need for item field in edict struct, FFL_SPAWNTEMP item will be skipped on saves
    {"item", FOFS(item), F_ITEM},

    {"gravity", STOFS(gravity), F_LSTRING, FFL_SPAWNTEMP},
    {"sky", STOFS(sky), F_LSTRING, FFL_SPAWNTEMP},
    {"skyrotate", STOFS(skyrotate), F_FLOAT, FFL_SPAWNTEMP},
    {"skyaxis", STOFS(skyaxis), F_VECTOR, FFL_SPAWNTEMP},
    {"minyaw", STOFS(minyaw), F_FLOAT, FFL_SPAWNTEMP},
    {"maxyaw", STOFS(maxyaw), F_FLOAT, FFL_SPAWNTEMP},
    {"minpitch", STOFS(minpitch), F_FLOAT, FFL_SPAWNTEMP},
    {"maxpitch", STOFS(maxpitch), F_FLOAT, FFL_SPAWNTEMP},
    {"nextmap", STOFS(nextmap), F_LSTRING, FFL_SPAWNTEMP},

    {"goal_frame", FOFS(goal_frame), F_FLOAT},
    {"chasedist1", FOFS(chasedist1), F_INT},
    {"chasedist2", FOFS(chasedist2), F_INT},

    //Mappack - end of new fields.
    //Knightmare- for Lazarus compatibility
    {"key_message", FOFS(key_message), F_LSTRING},

    // Lazarus additions
    {"actor_current_weapon", FOFS(actor_current_weapon), F_INT},
    {"alpha", FOFS(alpha), F_FLOAT},
    {"axis", FOFS(axis), F_INT},
    {"base_radius", FOFS(base_radius), F_FLOAT},
    {"bleft", FOFS(bleft), F_VECTOR},
    {"tright", FOFS(tright), F_VECTOR},
    {"blood_type", FOFS(blood_type), F_INT},
    {"bob", FOFS(bob), F_FLOAT},
    {"bobframe", FOFS(bobframe), F_INT},
    {"busy", FOFS(busy), F_INT},
    {"child", FOFS(child), F_EDICT},
    {"class_id", FOFS(class_id), F_INT},
    {"color", FOFS(color), F_VECTOR},
    {"crane_beam", FOFS(crane_beam), F_EDICT, FFL_NOSPAWN},
    {"crane_bonk", FOFS(crane_bonk), F_VECTOR},
    {"crane_cable", FOFS(crane_cable), F_EDICT, FFL_NOSPAWN},
    {"crane_cargo", FOFS(crane_cargo), F_EDICT, FFL_NOSPAWN},
    {"crane_control", FOFS(crane_control), F_EDICT, FFL_NOSPAWN},
    {"crane_dir", FOFS(crane_dir), F_INT},
    {"crane_hoist", FOFS(crane_hoist), F_EDICT, FFL_NOSPAWN},
    {"crane_hook", FOFS(crane_hook), F_EDICT, FFL_NOSPAWN},
    {"crane_increment", FOFS(crane_increment), F_INT},
    {"crane_light", FOFS(crane_light), F_EDICT, FFL_NOSPAWN},
    {"crane_onboard_control", FOFS(crane_onboard_control), F_EDICT, FFL_NOSPAWN},
    {"datafile", FOFS(datafile), F_LSTRING},
    {"deadflag", FOFS(deadflag), F_INT},
    {"density", FOFS(density), F_FLOAT},
    {"destroytarget", FOFS(destroytarget), F_LSTRING},
    {"dmgteam", FOFS(dmgteam), F_LSTRING},
    {"do_not_rotate", FOFS(do_not_rotate), F_INT},
    {"duration", FOFS(duration), F_FLOAT},
    {"effects", FOFS(effects), F_INT},
    {"fadein", FOFS(fadein), F_FLOAT},
    {"fadeout", FOFS(fadeout), F_FLOAT},
    {"flies", FOFS(monsterinfo.flies), F_FLOAT},
    {"fog_color", FOFS(fog_color), F_VECTOR},
    {"fog_density", FOFS(fog_density), F_FLOAT},
    {"fog_far", FOFS(fog_far), F_FLOAT},
    {"fog_index", FOFS(fog_index), F_INT},
    {"fog_model", FOFS(fog_model), F_INT},
    {"fog_near", FOFS(fog_near), F_FLOAT},
    {"fogclip", FOFS(fogclip), F_INT},
    {"followtarget", FOFS(followtarget), F_LSTRING},
    {"frame", FOFS(s.frame), F_INT},
    {"framenumbers", FOFS(framenumbers), F_INT},
    {"gib_health", FOFS(gib_health), F_INT},
    {"gib_type", FOFS(gib_type), F_INT},
    {"health2", FOFS(health2), F_INT},
    {"holdtime", FOFS(holdtime), F_FLOAT},
    {"id", FOFS(id), F_INT},
    {"idle_noise", FOFS(idle_noise), F_LSTRING},
    {"jumpdn", FOFS(monsterinfo.jumpdn), F_FLOAT},
    {"jumpup", FOFS(monsterinfo.jumpup), F_FLOAT},
    {"mass2", FOFS(mass2), F_INT},
    {"max_health", FOFS(max_health), F_INT},
    {"max_range", FOFS(monsterinfo.max_range), F_FLOAT},
    {"moreflags", FOFS(moreflags), F_INT},
    {"movewith", FOFS(movewith), F_LSTRING},
    {"movewith_ent", FOFS(movewith_ent), F_EDICT},
    {"movewith_next", FOFS(movewith_next), F_EDICT},
    {"movewith_offset", FOFS(movewith_offset), F_VECTOR},
    {"old_offset", FOFS(old_offset), F_VECTOR},
    {"move_to", FOFS(move_to), F_LSTRING},
    {"muzzle", FOFS(muzzle), F_VECTOR},
    {"muzzle2", FOFS(muzzle2), F_VECTOR},
    {"newtargetname", FOFS(newtargetname), F_LSTRING},
    {"next_grenade", FOFS(next_grenade), F_EDICT, FFL_NOSPAWN},
    {"origin_offset", FOFS(origin_offset), F_VECTOR},
    {"offset", FOFS(offset), F_VECTOR},
    {"org_maxs", FOFS(org_maxs), F_VECTOR},
    {"org_mins", FOFS(org_mins), F_VECTOR},
    {"org_size", FOFS(org_size), F_VECTOR},
    {"owner_id", FOFS(owner_id), F_INT},
    {"parent_attach_angles", FOFS(parent_attach_angles), F_VECTOR},
    {"child_attach_angles", FOFS(child_attach_angles), F_VECTOR},
    {"pitch_speed", FOFS(pitch_speed), F_FLOAT},
    {"powerarmor", FOFS(powerarmor), F_INT},
    {"powerarmortype", FOFS(powerarmortype), F_INT},
    {"prev_grenade", FOFS(prev_grenade), F_EDICT, FFL_NOSPAWN},
    {"prevpath", FOFS(prevpath), F_EDICT},
    {"radius", FOFS(radius), F_FLOAT},
    {"renderfx", FOFS(renderfx), F_INT},
    {"roll", FOFS(roll), F_FLOAT},
    {"roll_speed", FOFS(roll_speed), F_FLOAT},
    {"skinnum", FOFS(skinnum), F_INT},
    {"speaker", FOFS(speaker), F_EDICT, FFL_NOSPAWN},
    {"smooth_movement", FOFS(smooth_movement), F_INT},
    {"solidstate", FOFS(solidstate), F_INT},
    {"source", FOFS(source), F_LSTRING},
    {"startframe", FOFS(startframe), F_INT},
    {"target2", FOFS(target2), F_LSTRING},
    {"turn_rider", FOFS(turn_rider), F_INT},
    {"turret", FOFS(turret), F_EDICT},
    {"usermodel", FOFS(usermodel), F_LSTRING},
    {"vehicle", FOFS(vehicle), F_EDICT, FFL_NOSPAWN},
    {"viewer", FOFS(viewer), F_EDICT},
    {"flash", FOFS(flash), F_EDICT, FFL_NOSPAWN},
    {"viewheight", FOFS(viewheight), F_INT},
    {"viewmessage", FOFS(viewmessage), F_LSTRING},
    {"yaw_speed", FOFS(yaw_speed), F_FLOAT},

    // ROGUE
    {"bad_area", FOFS(bad_area), F_EDICT},
    // while the hint_path stuff could be reassembled on the fly, no reason to be different
    {"hint_chain", FOFS(hint_chain), F_EDICT},
    {"monster_hint_chain", FOFS(monster_hint_chain), F_EDICT},
    {"target_hint_chain", FOFS(target_hint_chain), F_EDICT},
    //
    {"goal_hint", FOFS(monsterinfo.goal_hint), F_EDICT},
    {"badMedic1", FOFS(monsterinfo.badMedic1), F_EDICT},
    {"badMedic2", FOFS(monsterinfo.badMedic2), F_EDICT},
    {"last_player_enemy", FOFS(monsterinfo.last_player_enemy), F_EDICT},
    {"commander", FOFS(monsterinfo.commander), F_EDICT},
    {"leader", FOFS(monsterinfo.leader), F_EDICT},
    {"old_leader", FOFS(monsterinfo.old_leader), F_EDICT},
    {"blocked", FOFS(monsterinfo.blocked), F_FUNCTION, FFL_NOSPAWN},
    {"duck", FOFS(monsterinfo.duck), F_FUNCTION, FFL_NOSPAWN},
    {"unduck", FOFS(monsterinfo.unduck), F_FUNCTION, FFL_NOSPAWN},
    {"sidestep", FOFS(monsterinfo.sidestep), F_FUNCTION, FFL_NOSPAWN},
    // ROGUE

    {"postthink", FOFS(postthink), F_FUNCTION, FFL_NOSPAWN}, // Knightmare added
    {"salpha", FOFS(s.alpha), F_FLOAT}, // Knightmare- hack for setting alpha
    {"show_hostile", FOFS(show_hostile), F_INT}, // Knightmare added
    {"powerarmor_time", FOFS(powerarmor_time), F_FLOAT}, // Knightmare added
    {"skinnum", FOFS(s.skinnum), F_INT},
    {"crosshair", FOFS(crosshair), F_EDICT},
    {"from", FOFS(from), F_EDICT},
    {"to", FOFS(to), F_EDICT},
    {"flash", FOFS(flash), F_EDICT},
    // FIXME: how to save 6-part reflection field?

    {0, 0, 0, 0}