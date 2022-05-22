#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StartupAssetTypeData.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FStartupAssetTypeData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Path;
    
private:
    UPROPERTY()
    FSoftObjectPath ClassType;
    
    UPROPERTY(Transient)
    UClass* ResolvedClassType;
    
public:
    UPROPERTY()
    bool bBlueprint;
    
    UPROPERTY()
    FName AssetCategory;
    
    FStartupAssetTypeData();
};

