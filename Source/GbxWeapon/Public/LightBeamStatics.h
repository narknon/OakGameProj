#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LightBeamInitializationData.h"
#include "LightBeamCallbackEventDelegate.h"
#include "ELightBeamFlag.h"
#include "LightBeamQueryData.h"
#include "LightBeamAttachment.h"
#include "ForceSelection.h"
#include "LightBeamStatics.generated.h"

class UDamageSource;
class APawn;
class AActor;
class ULightBeamData;
class UGbxDamageType;
class UImpactData;

UCLASS(BlueprintType)
class GBXWEAPON_API ULightBeamStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULightBeamStatics();
    UFUNCTION(BlueprintCallable)
    static void SetBeamFlag(UPARAM(Ref) FLightBeamInitializationData& InitData, ELightBeamFlag Flag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void RemoveLightBeamsBySource(AActor* Source, FName NameId);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void RemoveLightBeamsByActor(const FLightBeamQueryData& Query);
    
    UFUNCTION(BlueprintPure)
    static bool IsBeamFlagSet(const FLightBeamInitializationData& InitData, ELightBeamFlag Flag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ForEachLightBeam(const FLightBeamQueryData& Query, const FLightBeamCallbackEvent& Callback);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool DoesLightBeamExist(const FLightBeamQueryData& Query);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void CreateLightBeamFromData(const FLightBeamInitializationData& InitData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void CreateLightBeam(TSubclassOf<ULightBeamData> Data, APawn* Instigator, const FLightBeamAttachment& Source, FLightBeamAttachment Target, bool bTargetLocked, FName NameId, float Damage, TSubclassOf<UGbxDamageType> DamageType, TSubclassOf<UDamageSource> DamageSource, float DamageRadius, AActor* DamageCauser, UImpactData* ImpactDataOverride, FForceSelection ImpactForce, float LifetimeOverride, bool bViewDependent);
    
    UFUNCTION(BlueprintCallable)
    static void ClearBeamFlag(UPARAM(Ref) FLightBeamInitializationData& InitData, ELightBeamFlag Flag);
    
};

