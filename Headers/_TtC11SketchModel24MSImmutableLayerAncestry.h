//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSImmutableDocumentData, MSImmutableLayer, NSArray;

@interface _TtC11SketchModel24MSImmutableLayerAncestry : NSObject
{
    // Error parsing type: , name: layer
    // Error parsing type: , name: ancestors
    // Error parsing type: , name: document
    // Error parsing type: , name: $__lazy_storage_$_absoluteRect
}

- (void).cxx_destruct;
- (id)init;
- (id)ancestryToPage;
@property(nonatomic) struct CGRect absoluteRect;
- (id)ancestorsAndSelf;
- (id)artboard;
- (id)parentGroup;
- (id)page;
- (id)initWithLayer:(id)arg1 ancestors:(id)arg2 document:(id)arg3;
- (id)initWithPage:(id)arg1 document:(id)arg2;
- (id)initWithMutableLayer:(id)arg1 document:(id)arg2;
- (id)initWithMutableLayer:(id)arg1;
@property(nonatomic, readonly) MSImmutableDocumentData *document; // @synthesize document;
@property(nonatomic, readonly) NSArray *ancestors;
@property(nonatomic, readonly) MSImmutableLayer *layer; // @synthesize layer;

@end

