// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to LEMTemperature.h instead.

@import CoreData;

extern const struct LEMTemperatureAttributes {
	__unsafe_unretained NSString *temperature;
} LEMTemperatureAttributes;

extern const struct LEMTemperatureRelationships {
	__unsafe_unretained NSString *geolocation;
} LEMTemperatureRelationships;

@class LEMGeolocation;

@interface LEMTemperatureID : NSManagedObjectID {}
@end

@interface _LEMTemperature : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) LEMTemperatureID* objectID;

@property (nonatomic, strong) LEMGeolocation *geolocation;

//- (BOOL)validateGeolocation:(id*)value_ error:(NSError**)error_;

@end

@interface _LEMTemperature (CoreDataGeneratedPrimitiveAccessors)

- (LEMGeolocation*)primitiveGeolocation;
- (void)setPrimitiveGeolocation:(LEMGeolocation*)value;

@end