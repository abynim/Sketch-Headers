//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSModelObject.h"

#import "MSModelBase.h"
#import "NSCoding.h"

@class NSObject<NSCopying><NSCoding>, NSString;

@interface MSImmutableModelBase : MSModelObject <NSCoding, MSModelBase>
{
}

+ (Class)mutableClass;
- (id)migrationsInList:(SEL *)arg1;
- (SEL *)migrationListForClass:(Class)arg1;
- (SEL *)allocateMigrationListForClass:(Class)arg1;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)decodePropertiesUsingMigrationWithCoder:(id)arg1;
- (void)performMigrationsWithCoder:(id)arg1;
- (void)enumerateMigrations:(SEL *)arg1 fromVersion:(long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)performInitWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeObjectIDWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (BOOL)attributesEqualAttributesForObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;
- (id)initWithMutableModelObject:(id)arg1;
- (id)newMutableCounterpart;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly) Class superclass;

@end

