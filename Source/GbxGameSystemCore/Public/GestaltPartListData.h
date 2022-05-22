#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GesaltOptionalPartData.h"
#include "GestaltPartListData.generated.h"

class UGestaltPartData;

UCLASS()
class GBXGAMESYSTEMCORE_API UGestaltPartListData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<UGestaltPartData*> RequiredParts;
    
    UPROPERTY(EditAnywhere)
    TArray<FGesaltOptionalPartData> OptionalParts;
    
    UPROPERTY(EditAnywhere)
    TArray<UGestaltPartData*> SpecialParts;
    
public:
    UGestaltPartListData();
};

