#pragma once
#include "CoreMinimal.h"
#include "DynamicRoomBaseData.h"
#include "UObject/NoExportTypes.h"
#include "DynamicRoomActorData.generated.h"

class AActor;

UCLASS()
class GBXDYNAMICROOM_API UDynamicRoomActorData : public UDynamicRoomBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSoftClassPath DynamicRoomAssetName;
    
    UDynamicRoomActorData();
private:
    UFUNCTION()
    void HandleDynamicRoomActorSpawned(AActor* SpawnedActor, int32 InstanceIndex);
    
};

