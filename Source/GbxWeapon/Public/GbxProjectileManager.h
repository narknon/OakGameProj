#pragma once
#include "CoreMinimal.h"
#include "IGbxProjectileManager.h"
#include "GbxProjectileManager.generated.h"

class UProjectileHomingComponent;

UCLASS()
class GBXWEAPON_API UGbxProjectileManager : public UIGbxProjectileManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    TArray<UProjectileHomingComponent*> HomingComponents;
    
public:
    UGbxProjectileManager();
};

