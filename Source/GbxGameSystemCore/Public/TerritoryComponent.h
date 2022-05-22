#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TerritoryData.h"
#include "ETerritoryCombatProxyType.h"
#include "ETerritoryDrawStyle.h"
#include "TerritoryComponent.generated.h"

class UTerritoryComponent;

UCLASS(DefaultConfig, ClassGroup=Custom, Config=Editor, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UTerritoryComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FTerritoryData PatrolTerritory;
    
    UPROPERTY(EditAnywhere)
    FTerritoryData ThreatTerritory;
    
    UPROPERTY(EditAnywhere)
    FTerritoryData CombatTerritory;
    
    UPROPERTY(EditAnywhere)
    ETerritoryCombatProxyType CombatProxy;
    
    UPROPERTY(EditAnywhere)
    bool bUseCombatProxy;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysAwareInThreatArea;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    ETerritoryDrawStyle DrawStyle;
    
    UPROPERTY(Export, Transient)
    TArray<UTerritoryComponent*> LinkedTerritories;
    
public:
    UTerritoryComponent();
};

