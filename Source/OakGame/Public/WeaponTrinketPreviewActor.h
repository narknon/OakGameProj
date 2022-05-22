#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponTrinketPreviewActor.generated.h"

class UGbxCustomizationComponent;
class UGbxSkeletalMeshComponent;

UCLASS()
class AWeaponTrinketPreviewActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UGbxCustomizationComponent* CustomizationComponent;
    
    UPROPERTY(Export)
    UGbxSkeletalMeshComponent* SkeletalMeshComponent;
    
    AWeaponTrinketPreviewActor();
};

