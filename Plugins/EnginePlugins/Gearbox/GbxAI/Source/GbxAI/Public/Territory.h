#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "Territory.generated.h"

class UTerritoryComponent;

UCLASS()
class GBXAI_API ATerritory : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, VisibleAnywhere)
    UTerritoryComponent* TerritoryComponent;
    
public:
    ATerritory();
    UFUNCTION(BlueprintPure)
    UTerritoryComponent* GetTerritoryComponent() const;
    
};

