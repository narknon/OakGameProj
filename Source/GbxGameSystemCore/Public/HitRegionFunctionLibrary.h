#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HitRegionFunctionLibrary.generated.h"

class UPrimitiveComponent;
class AActor;
class UHitRegionData;

UCLASS(BlueprintType)
class UHitRegionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHitRegionFunctionLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ResetHitRegionHealth(AActor* Actor, UHitRegionData* HitRegion, UPrimitiveComponent* AssociatedComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ResetAllHitRegionHealth(AActor* Actor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void RefillHitRegionHealthByPercent(float RefillPercent, AActor* Actor, UHitRegionData* HitRegion, UPrimitiveComponent* AssociatedComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void RefillHitRegionHealthByAmount(float RefillAmount, AActor* Actor, UHitRegionData* HitRegion, UPrimitiveComponent* AssociatedComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void AssociateComponentWithHitRegion(AActor* Actor, UPrimitiveComponent* ComponentToAssociate, UHitRegionData* HitRegion);
    
};

