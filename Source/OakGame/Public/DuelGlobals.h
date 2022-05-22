#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DuelTeamGroup.h"
#include "GbxDataAsset.h"
#include "DuelModeSettings.h"
#include "DuelGlobals.generated.h"

class UDamageSource;
class ADuelArena;
class ADuelTotem;
class UGbxAction;
class UGameStatData;

UCLASS()
class UDuelGlobals : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<ADuelArena> DuelArenaBlueprint;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<ADuelTotem> DuelTotemBlueprint;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> DuelInitiateAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDamageSource> DamageSourceForInitiatingDuels;
    
    UPROPERTY(EditAnywhere)
    FDuelModeSettings Settings_OnFoot;
    
    UPROPERTY(EditAnywhere)
    FDuelModeSettings Settings_Vehicle;
    
    UPROPERTY(EditAnywhere)
    float ReviveDownedPlayerDelay;
    
    UPROPERTY(EditAnywhere)
    TArray<FDuelTeamGroup> DuelTeams;
    
    UPROPERTY(EditAnywhere)
    FText EnterVehicleDuelErrorMessage;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UGameStatData> WinStat;
    
    UDuelGlobals();
};

