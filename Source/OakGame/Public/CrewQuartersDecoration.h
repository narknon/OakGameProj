#pragma once
#include "CoreMinimal.h"
#include "CrewQuartersInteractiveObject.h"
#include "UseEvent.h"
#include "CrewQuartersDecoration.generated.h"

class AController;
class UCrewQuartersAssetDecorationData;
class UCrewQuartersDecorationData;
class UMeshComponent;
class UAnimSequence;
class ACrewQuartersDecorationDisplayActor;
class UPrimitiveComponent;
class ACrewQuartersRoom;

UCLASS()
class ACrewQuartersDecoration : public ACrewQuartersInteractiveObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCrewQuartersDecorationData* DefaultDecoration;
    
    UPROPERTY(EditAnywhere)
    int32 DecorationIndex;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_CurrentDecoration)
    UCrewQuartersDecorationData* CurrentDecoration;
    
    UPROPERTY(Transient)
    UAnimSequence* CurrentAnim;
    
private:
    UPROPERTY(Export, Transient)
    UMeshComponent* DecorationMesh;
    
    UPROPERTY(Transient)
    ACrewQuartersDecorationDisplayActor* DecorationActor;
    
    UPROPERTY(Transient)
    UCrewQuartersDecorationData* InitialDecoration;
    
    UPROPERTY(Transient)
    UCrewQuartersAssetDecorationData* CurrentDecorationAsset;
    
public:
    ACrewQuartersDecoration();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void StartDefaultAnim();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInitialDecoration(UCrewQuartersDecorationData* NewDecoration);
    
    UFUNCTION(BlueprintCallable)
    void SetDecoration(UCrewQuartersDecorationData* NewDecoration);
    
    UFUNCTION(BlueprintCallable)
    void SelectNextDecoration();
    
    UFUNCTION()
    void OnUsedSecondaryBy(AController* UserController, UPrimitiveComponent* UsedComponent);
    
    UFUNCTION()
    void OnUsedBy(const FUseEvent& UseEvent);
    
private:
    UFUNCTION()
    void OnRep_CurrentDecoration();
    
    UFUNCTION()
    void OnDecorationAssetLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void GetAvailableDecorations(TArray<UCrewQuartersDecorationData*>& OutDecorations, ACrewQuartersRoom* InRoomOverride);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDecoration(UCrewQuartersDecorationData* NewDecoration);
    
};

