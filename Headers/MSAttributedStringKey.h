//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchModel/BCJSONEncoding-Protocol.h>
#import <SketchModel/NSCopying-Protocol.h>

@class MSAttributedString, NSString;

@interface MSAttributedStringKey : NSObject <NSCopying, BCJSONEncoding>
{
    MSAttributedString *_attributedString;
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) MSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (void).cxx_destruct;
- (id)initWithJSONDecoder:(id)arg1;
- (void)encodeAsJSON:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAttributedString:(id)arg1 size:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
