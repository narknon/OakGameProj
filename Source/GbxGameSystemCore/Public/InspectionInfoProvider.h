#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InspectionInfo.h"
#include "InspectionInfoProvider.generated.h"

UINTERFACE(Blueprintable)
class GBXGAMESYSTEMCORE_API UInspectionInfoProvider : public UInterface {
    GENERATED_BODY()
};

class GBXGAMESYSTEMCORE_API IInspectionInfoProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void GetInspectionInfo(UPARAM(Ref) FInspectionInfo& InspectionInfo) const;
    
};

