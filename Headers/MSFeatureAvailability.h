//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSFeatureFlag;

@interface MSFeatureAvailability : NSObject
{
    // Error parsing type: , name: cloudLicensing
    // Error parsing type: , name: componentMenuTypeToSearch
    // Error parsing type: , name: saveOmitsDefaultValues
    // Error parsing type: , name: maintainScrollPositionAfterClick
    // Error parsing type: , name: assistants
    // Error parsing type: , name: structuredData
    // Error parsing type: , name: incrementalCloudUploads
    // Error parsing type: , name: collaborationLog
    // Error parsing type: , name: coedit
    // Error parsing type: , name: colorVariables
    // Error parsing type: , name: embeddedFonts
    // Error parsing type: , name: undoUsingRefaulting
    // Error parsing type: , name: gpuOverlay
    // Error parsing type: , name: renderResolvedDocument
    // Error parsing type: , name: componentsWindow
}

+ (void)setShared:(id)arg1;
+ (id)shared;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) MSFeatureFlag *componentsWindow; // @synthesize componentsWindow;
@property(nonatomic, readonly) MSFeatureFlag *renderResolvedDocument; // @synthesize renderResolvedDocument;
@property(nonatomic, readonly) MSFeatureFlag *gpuOverlay; // @synthesize gpuOverlay;
@property(nonatomic, readonly) MSFeatureFlag *undoUsingRefaulting; // @synthesize undoUsingRefaulting;
@property(nonatomic, readonly) MSFeatureFlag *embeddedFonts; // @synthesize embeddedFonts;
@property(nonatomic, readonly) MSFeatureFlag *colorVariables; // @synthesize colorVariables;
@property(nonatomic, readonly) MSFeatureFlag *coedit; // @synthesize coedit;
@property(nonatomic, readonly) MSFeatureFlag *collaborationLog; // @synthesize collaborationLog;
@property(nonatomic, readonly) MSFeatureFlag *incrementalCloudUploads; // @synthesize incrementalCloudUploads;
@property(nonatomic, readonly) MSFeatureFlag *structuredData; // @synthesize structuredData;
@property(nonatomic, readonly) MSFeatureFlag *assistants; // @synthesize assistants;
@property(nonatomic, readonly) MSFeatureFlag *maintainScrollPositionAfterClick; // @synthesize maintainScrollPositionAfterClick;
@property(nonatomic, readonly) MSFeatureFlag *saveOmitsDefaultValues; // @synthesize saveOmitsDefaultValues;
@property(nonatomic, readonly) MSFeatureFlag *componentMenuTypeToSearch; // @synthesize componentMenuTypeToSearch;
@property(nonatomic, readonly) MSFeatureFlag *cloudLicensing; // @synthesize cloudLicensing;

@end

