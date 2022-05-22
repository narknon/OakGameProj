#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "GbxDialogSettings.generated.h"

class UWwiseRtpc;
class UDialogParameter;
class UDialogEnumValue;
class AActor;
class UWwiseEvent;
class UDialogBlackboard;
class UDialogEnumType;

UCLASS()
class GBXDIALOG_API UGbxDialogSettings : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> PureEchoSpeakerActorClass;
    
    UPROPERTY(EditAnywhere)
    UClass* GameGlobalParametersProviderClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDialogBlackboard> BlackboardClass;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* ConfigurePureEchoTalkerEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* EchoControlWwiseParameter;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* PureEchoSpeakerWwiseParameter;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* VoicePitchParameter;
    
    UPROPERTY(EditAnywhere)
    TArray<UDialogEnumValue*> EnforcedRestrictionQualifiers;
    
    UPROPERTY(EditAnywhere)
    float ConversationExpirationDuration;
    
    UPROPERTY(EditAnywhere)
    float RecentPerformancesExpirationDuration;
    
    UPROPERTY(EditAnywhere)
    float EmoteWeightBlendDuration;
    
    UPROPERTY(EditAnywhere)
    float SmallCooldownRadius;
    
    UPROPERTY(EditAnywhere)
    float NearRadius;
    
    UPROPERTY(EditAnywhere)
    float QuietTimeMergeRadius;
    
    UPROPERTY(EditAnywhere)
    float RegionRadius;
    
    UPROPERTY(EditAnywhere)
    float EnableEchoBelowVolume;
    
    UPROPERTY(EditAnywhere)
    float DisableEchoAboveVolume;
    
    UPROPERTY(EditAnywhere)
    float EchoTransitionReqiredVolumeChange;
    
    UPROPERTY(EditAnywhere)
    float InterConversationDelay;
    
    UPROPERTY(EditAnywhere)
    FSoftObjectPath ConfigurationErrorSound;
    
    UPROPERTY(EditAnywhere)
    UDialogParameter* EventParameter;
    
    UPROPERTY(EditAnywhere)
    UDialogParameter* SelfParameter;
    
    UPROPERTY(EditAnywhere)
    UDialogParameter* GlobalContextParameter;
    
    UPROPERTY(EditAnywhere)
    UDialogParameter* ScriptContextParameter;
    
    UPROPERTY(EditAnywhere)
    UDialogParameter* ConversationContextParameter;
    
    UPROPERTY(EditAnywhere)
    UDialogParameter* LineContextParameter;
    
    UPROPERTY(EditAnywhere)
    UDialogEnumType* CountersEnum;
    
    UPROPERTY(EditAnywhere)
    UDialogEnumType* FlagsEnum;
    
    UGbxDialogSettings();
};

