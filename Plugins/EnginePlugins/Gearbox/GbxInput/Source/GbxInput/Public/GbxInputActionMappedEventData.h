#pragma once
#include "CoreMinimal.h"
#include "GbxInputButton.h"
#include "GbxInputAxis.h"
#include "GbxInputActionMappedEventParam_String.h"
#include "GbxInputActionMappedEventParam_Name.h"
#include "GbxInputActionMappedEventParam_Int.h"
#include "GbxInputActionMappedEventParam_Float.h"
#include "GbxInputActionMappedEventData.generated.h"

class UGbxInputKeyRebindData;

USTRUCT(BlueprintType)
struct GBXINPUT_API FGbxInputActionMappedEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FGbxInputButton> Buttons;
    
    UPROPERTY()
    TArray<FGbxInputAxis> Axes;
    
    UPROPERTY()
    TArray<UGbxInputKeyRebindData*> Bindings;
    
    UPROPERTY()
    TArray<FGbxInputActionMappedEventParam_String> StringParams;
    
    UPROPERTY()
    TArray<FGbxInputActionMappedEventParam_Name> NameParams;
    
    UPROPERTY()
    TArray<FGbxInputActionMappedEventParam_Int> IntParams;
    
    UPROPERTY()
    TArray<FGbxInputActionMappedEventParam_Float> FloatParams;
    
public:
    FGbxInputActionMappedEventData();
};

