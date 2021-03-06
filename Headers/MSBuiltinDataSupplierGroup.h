//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/MSDataSupplierGroup.h>

#import <SketchControllers/NSCoding-Protocol.h>

@class NSArray;

@interface MSBuiltinDataSupplierGroup : MSDataSupplierGroup <NSCoding>
{
    NSArray *_encodedIdentifiers;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *encodedIdentifiers; // @synthesize encodedIdentifiers=_encodedIdentifiers;
- (BOOL)includesEncodedIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *builtinDataSuppliers;
- (id)groupName;
- (id)makeGroupIdentifier;
- (BOOL)postDecodingInitializingWithDelegate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBuiltinDataSuppliers:(id)arg1 delegate:(id)arg2;

@end

