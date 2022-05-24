#pragma once
#include "CoreMinimal.h"
#include "OakCARMenuPartType.h"
#include "GFxCARMenuCustomizePageConfig.generated.h"

class UGFxCARMenu;
class UVehicleSpawnerComponent;
class UGbxGFxPooledGridList;

USTRUCT()
struct FGFxCARMenuCustomizePageConfig {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxCARMenu* CARMenuOwner;
    
    UPROPERTY(Export, Transient)
    UVehicleSpawnerComponent* VehicleSpawner;
    
    UPROPERTY(Transient)
    UGbxGFxPooledGridList* ItemList;
    
    UPROPERTY(Transient)
    FOakCARMenuPartType PartType;
    
    UPROPERTY(Transient)
    bool bCanSelectEmpty;
    
    OAKGAME_API FGFxCARMenuCustomizePageConfig();
};

