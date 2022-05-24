#pragma once
#include "CoreMinimal.h"
#include "MissionEventReference.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "ItemPoolInfo.h"
#include "NPCInteractionBlueprintLibrary.generated.h"

class UStaticMesh;
class AActor;

UCLASS(BlueprintType)
class OAKGAME_API UNPCInteractionBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNPCInteractionBlueprintLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void TakeObjectFromPlayerThenGiveBack(AActor* TheNPC, bool bUseAlternateStance, FMissionEventReference MissionEvent, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void TakeObjectFromPlayer(AActor* TheNPC, bool bUseAlternateStance, FMissionEventReference MissionEvent, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SetObjectToHold(AActor* TheNPC, UStaticMesh* TheStaticMeshToHold, const FItemPoolInfo& ThePickupToHold, FVector LocationOffset, FRotator RotationOffset, float ScaleOffset, FName HandSocketName, float PutAwayTimeOffset, float TakeOutTimeOffset);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool NotifyNPCUsedByPlayer(AActor* TheNPC);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void GiveObjectToPlayer(AActor* TheNPC, bool bUseAlternateStance, FMissionEventReference MissionEvent, FLatentActionInfo LatentInfo);
    
};

