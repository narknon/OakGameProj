#include "OakVehicleSettings.h"

class UObject;

void UOakVehicleSettings::EnumerateValidPartAndWheel(TArray<FString>& PartAndWheels) {
}

void UOakVehicleSettings::EnumeratePropertiesByType(UObject* Data, TArray<FString>& Properties) {
}

FString UOakVehicleSettings::CleanVehiclePartName(const FString& Name) {
    return TEXT("");
}

UOakVehicleSettings::UOakVehicleSettings() {
    this->MaximumAoeDamageDistance = 10.00f;
    this->AlwaysUnlockedParts.AddDefaulted(32);
    this->AlwaysUnlockedDLCParts.AddDefaulted(4);
    this->AlwaysUnlockedVehicles.AddDefaulted(1);
    this->AlwaysUnlockedDLCVehicles.AddDefaulted(2);
    this->bAlwaysDestroyOtherCARVehicle = false;
    this->bNeverDespawnCARVehicle = false;
    this->EnumerationSources.AddDefaulted(2);
}

