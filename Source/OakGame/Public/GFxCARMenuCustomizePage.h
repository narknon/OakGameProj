#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OakCARMenuPartType.h"
#include "GbxGFxListCellUpdateInfo.h"
#include "GFxCARMenuCustomizePage.generated.h"

class UOakCARVehicleData;
class UGFxCARMenu;
class UVehicleSpawnerComponent;
class UGbxGFxPooledGridList;
class UOakCARVehiclePartData;

UCLASS()
class UGFxCARMenuCustomizePage : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxCARMenu> CARMenuOwner;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UVehicleSpawnerComponent> VehicleSpawner;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGFxPooledGridList> ItemList;
    
    UPROPERTY(Transient)
    FOakCARMenuPartType PartType;
    
    UPROPERTY(Transient)
    TArray<UOakCARVehicleData*> Vehicles;
    
    UPROPERTY(Transient)
    TArray<UOakCARVehiclePartData*> Parts;
    
    UPROPERTY(Transient)
    bool bCanSelectEmpty;
    
public:
    UGFxCARMenuCustomizePage();
private:
    UFUNCTION()
    void OnUpdateCell(const FGbxGFxListCellUpdateInfo& UpdateInfo);
    
    UFUNCTION()
    void OnCellFocused(const FGbxGFxListCellUpdateInfo& UpdateInfo);
    
    UFUNCTION()
    void OnCellClicked(const FGbxGFxListCellUpdateInfo& UpdateInfo);
    
};

