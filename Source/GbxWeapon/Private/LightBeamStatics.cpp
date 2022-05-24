#include "LightBeamStatics.h"
#include "Templates/SubclassOf.h"

class UDamageSource;
class AActor;
class ULightBeamData;
class APawn;
class UGbxDamageType;
class UImpactData;

void ULightBeamStatics::SetBeamFlag(FLightBeamInitializationData& InitData, ELightBeamFlag Flag) {
}

void ULightBeamStatics::RemoveLightBeamsBySource(AActor* Source, FName NameId) {
}

void ULightBeamStatics::RemoveLightBeamsByActor(const FLightBeamQueryData& Query) {
}

bool ULightBeamStatics::IsBeamFlagSet(const FLightBeamInitializationData& InitData, ELightBeamFlag Flag) {
    return false;
}

void ULightBeamStatics::ForEachLightBeam(const FLightBeamQueryData& Query, const FLightBeamCallbackEvent& Callback) {
}

bool ULightBeamStatics::DoesLightBeamExist(const FLightBeamQueryData& Query) {
    return false;
}

void ULightBeamStatics::CreateLightBeamFromData(const FLightBeamInitializationData& InitData) {
}

void ULightBeamStatics::CreateLightBeam(TSubclassOf<ULightBeamData> Data, APawn* Instigator, const FLightBeamAttachment& Source, FLightBeamAttachment Target, bool bTargetLocked, FName NameId, float Damage, TSubclassOf<UGbxDamageType> DamageType, TSubclassOf<UDamageSource> DamageSource, float DamageRadius, AActor* DamageCauser, UImpactData* ImpactDataOverride, FForceSelection ImpactForce, float LifetimeOverride, bool bViewDependent) {
}

void ULightBeamStatics::ClearBeamFlag(FLightBeamInitializationData& InitData, ELightBeamFlag Flag) {
}

ULightBeamStatics::ULightBeamStatics() {
}

