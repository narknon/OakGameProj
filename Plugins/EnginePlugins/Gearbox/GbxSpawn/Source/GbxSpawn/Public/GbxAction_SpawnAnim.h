#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "GbxAction_Anim.h"
#include "GbxAction_SpawnAnim.generated.h"

class UGbxAction;
class AActor;

UCLASS()
class GBXSPAWN_API UGbxAction_SpawnAnim : public UGbxAction_Anim {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> SpawnPointAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> SpawnPointActionStop;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementMode> OverrideMovementMode;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideMovementMode;
    
protected:
    UPROPERTY(EditAnywhere)
    bool bDisableCollisionOnSpawn;
    
public:
    UGbxAction_SpawnAnim();
private:
    UFUNCTION(BlueprintPure)
    AActor* K2_GetSpawnPoint() const;
    
};

