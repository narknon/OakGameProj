#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "ERecoilEndOfPatternAction.h"
#include "Curves/CurveFloat.h"
#include "RecoilPatternData.generated.h"

UCLASS()
class GBXWEAPON_API URecoilPatternData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FVector2D> Samples;
    
    UPROPERTY(EditAnywhere)
    bool bRandom;
    
    UPROPERTY(EditAnywhere)
    ERecoilEndOfPatternAction EndOfPatternAction;
    
    UPROPERTY(EditAnywhere)
    int32 RepeatPatternStartIndex;
    
    UPROPERTY(EditAnywhere)
    float EndOfPatternRise;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ShotSequenceScaleCurve;
    
    UPROPERTY(EditAnywhere)
    bool bAutoGenerateGoodness;
    
    UPROPERTY(EditAnywhere)
    float PatternHeightGoodness;
    
    UPROPERTY(EditAnywhere)
    float PatternWidthGoodness;
    
    URecoilPatternData();
};

