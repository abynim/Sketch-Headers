//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSLog-Protocol.h"
#import "MSLogConversion-Protocol.h"
#import "MSSerializableObject-Protocol.h"

@class MSDevice, NSDate, NSSet, NSString;

@interface MSAbstractLog : NSObject <MSLog, MSSerializableObject, MSLogConversion>
{
    NSString *_type;
    NSDate *_timestamp;
    NSString *_sid;
    NSString *_distributionGroupId;
    NSString *_userId;
    MSDevice *_device;
    NSObject *_tag;
    NSSet *_transmissionTargetTokens;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *transmissionTargetTokens; // @synthesize transmissionTargetTokens=_transmissionTargetTokens;
@property(retain, nonatomic) NSObject *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) MSDevice *device; // @synthesize device=_device;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *distributionGroupId; // @synthesize distributionGroupId=_distributionGroupId;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (id)convertTimeZoneOffsetToISO8601:(long long)arg1;
- (id)combineSDKLibVer:(id)arg1 withVersion:(id)arg2;
- (id)combineOsVersion:(id)arg1 withBuild:(id)arg2;
- (id)toCommonSchemaLogForTargetToken:(id)arg1 flags:(unsigned long long)arg2;
- (id)toCommonSchemaLogsWithFlags:(unsigned long long)arg1;
- (void)addTransmissionTargetToken:(id)arg1;
- (id)serializeLogWithPrettyPrinting:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (id)serializeToDictionary;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

