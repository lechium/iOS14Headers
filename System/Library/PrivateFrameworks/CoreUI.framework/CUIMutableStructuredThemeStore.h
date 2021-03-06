/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIStructuredThemeStore.h>

@class NSString, NSMutableDictionary;

@interface CUIMutableStructuredThemeStore : CUIStructuredThemeStore {

	NSString* _identifier;
	NSMutableDictionary* _memoryStore;
	NSMutableDictionary* _nameIdentifierStore;
	int _maxNameIdentifier;
	NSMutableDictionary* _apperanceNameIdentifierStore;
	int _maxApperanceNameIdentifier;
	NSMutableDictionary* _renditionInfoStore;

}
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)usesCUISystemThemeRenditionKey;
-(void)clearRenditionCache;
-(void)insertCGImage:(CGImageRef)arg1 withName:(id)arg2 andDescription:(id)arg3 ;
-(id)defaultAppearanceName;
-(void)removeImageNamed:(id)arg1 withDescription:(id)arg2 ;
-(void)dealloc;
-(long long)maximumRenditionKeyTokenCount;
-(const renditionkeyfmt*)keyFormat;
-(id)imagesWithName:(id)arg1 ;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1 cursorHotSpot:(CGPoint*)arg2 ;
-(id)appearances;
-(void)_addRenditionInfoForImageWithName:(id)arg1 andKey:(renditionkeytoken*)arg2 ;
-(BOOL)canGetRenditionWithKey:(const renditionkeytoken*)arg1 ;
-(renditionkeytoken*)renditionKeyForAssetWithName:(id)arg1 withDescription:(id)arg2 ;
-(unsigned short)appearanceIdentifierForName:(id)arg1 ;
-(id)renditionInfoForIdentifier:(unsigned short)arg1 ;
-(id)allImageNames;
-(id)nameForAppearanceIdentifier:(unsigned short)arg1 ;
-(void)_removeRenditionInfoForImageWithName:(id)arg1 ;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 usingKeySignature:(id)arg2 ;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1 ;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 ;
@end

