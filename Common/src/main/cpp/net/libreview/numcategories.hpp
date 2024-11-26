#include "settings/settings.hpp"
#pragma once
inline float longWeight(uint32_t type) { 
	if(type>=settings->varcount())
		return 0.0f;
	if(settings->data()->librenums[type].kind==2)
		return 1.0f;
	return 0.0f;
	}	
inline float rapidWeight(uint32_t type) { 
	if(type>=settings->varcount())
		return 0.0f;
	if(settings->data()->librenums[type].kind==1)
		return 1.0f;
	return 0.0f;
	}	
inline float carboWeight(uint32_t type) { 
	if(type>=settings->varcount())
		return 0.0f;
	if(settings->data()->librenums[type].kind==3)
		return settings->data()->librenums[type].weight;
	return 0.0f;
	}
inline bool isNote(uint32_t type) { 
	if(type>=settings->varcount())
		return false;
	return settings->data()->librenums[type].kind==4;
	}
