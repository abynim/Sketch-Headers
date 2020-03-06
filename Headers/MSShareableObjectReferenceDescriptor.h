//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchControllers/NSPasteboardReading-Protocol.h>
#import <SketchControllers/NSPasteboardWriting-Protocol.h>

@class NSString, NSURL;

@interface MSShareableObjectReferenceDescriptor : NSObject <NSPasteboardWriting, NSPasteboardReading>
{
    NSURL *_libraryLocation;
    NSString *_sharedObjectID;
    unsigned long long _shareableObjectType;
}

+ (id)readableTypesForPasteboard:(id)arg1;
+ (id)pasteboardType;
@property(nonatomic) unsigned long long shareableObjectType; // @synthesize shareableObjectType=_shareableObjectType;
@property(copy, nonatomic) NSString *sharedObjectID; // @synthesize sharedObjectID=_sharedObjectID;
@property(copy, nonatomic) NSURL *libraryLocation; // @synthesize libraryLocation=_libraryLocation;
- (void).cxx_destruct;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

