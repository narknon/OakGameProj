#pragma once
#include "CoreMinimal.h"
#include "EVoiceOfGodSpeaker.h"
#include "GbxDataAsset.h"
#include "ConditionalEchoData.h"
#include "DialogEnumValueInterface.h"
#include "DialogMoodInfo.h"
#include "DialogNameTag.generated.h"

class UWwiseRtpc;
class UDialogNameTag;
class UDialogEnumValue;
class UCharacterEchoDataBase;
class UDialogNameTagMoodData;

UCLASS(BlueprintType)
class GBXDIALOG_API UDialogNameTag : public UGbxDataAsset, public IDialogEnumValueInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    UDialogEnumValue* NameTagEnumValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UDialogEnumValue*> SupportedQualifiers;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogNameTag* ParentNameTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EVoiceOfGodSpeaker VoGSpeaker;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UCharacterEchoDataBase* EchoData;
    
    UPROPERTY(EditAnywhere)
    TArray<FConditionalEchoData> ConditionalAlternateEchoData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUsableForPureEchoes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDistributedSpeaker;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 VoicePitchOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UWwiseRtpc* CustomizationRTPC;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CustomizationRTPCValue;
    
    UPROPERTY(EditAnywhere)
    UDialogNameTagMoodData* MoodDataAsset;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FDialogMoodInfo> MoodData;
    
    UDialogNameTag();
    
    // Fix for true pure virtual functions not being implemented
};

