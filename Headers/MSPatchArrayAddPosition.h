//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchModel/MSCoding-Protocol.h>

@class NSString;

@interface MSPatchArrayAddPosition : NSObject <MSCoding>
{
    NSString *_parentID;
    NSString *_propertyName;
    unsigned long long _index;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property(readonly, nonatomic) NSString *parentID; // @synthesize parentID=_parentID;
- (id)debugDescription;
- (long long)compare:(id)arg1;
- (unsigned long long)insertObject:(id)arg1 withRoot:(id)arg2;
- (id)initWithUnarchiver:(id)arg1;
- (void)encodeWithArchiver:(id)arg1;
- (void)encodeAsJSON:(id)arg1;
- (id)initWithArrayChangeItem:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *archiveReferenceIdentifier_bc;

@end

