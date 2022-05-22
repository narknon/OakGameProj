#pragma once
#include "CoreMinimal.h"
#include "WwiseMusicTiming.h"
#include "OnMusicBeatDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMusicBeat, FWwiseMusicTiming, MusicTiming);

