//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSWrapperSdk.h"

#import "MSSerializableObject-Protocol.h"

@class NSNumber, NSString;

@interface MSDevice : MSWrapperSdk <MSSerializableObject>
{
    NSString *_sdkName;
    NSString *_sdkVersion;
    NSString *_model;
    NSString *_oemName;
    NSString *_osName;
    NSString *_osVersion;
    NSString *_osBuild;
    NSNumber *_osApiLevel;
    NSString *_locale;
    NSNumber *_timeZoneOffset;
    NSString *_screenSize;
    NSString *_appVersion;
    NSString *_carrierName;
    NSString *_carrierCountry;
    NSString *_appBuild;
    NSString *_appNamespace;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appNamespace; // @synthesize appNamespace=_appNamespace;
@property(copy, nonatomic) NSString *appBuild; // @synthesize appBuild=_appBuild;
@property(copy, nonatomic) NSString *carrierCountry; // @synthesize carrierCountry=_carrierCountry;
@property(copy, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *screenSize; // @synthesize screenSize=_screenSize;
@property(retain, nonatomic) NSNumber *timeZoneOffset; // @synthesize timeZoneOffset=_timeZoneOffset;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(copy, nonatomic) NSNumber *osApiLevel; // @synthesize osApiLevel=_osApiLevel;
@property(copy, nonatomic) NSString *osBuild; // @synthesize osBuild=_osBuild;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy, nonatomic) NSString *osName; // @synthesize osName=_osName;
@property(copy, nonatomic) NSString *oemName; // @synthesize oemName=_oemName;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *sdkName; // @synthesize sdkName=_sdkName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (id)serializeToDictionary;

@end

