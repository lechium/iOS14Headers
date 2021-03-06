/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/_UIDocumentPickerContainerItem.h>

@class NSURL, NSString, NSArray, NSDate;

@interface _UIDocumentPickerContainerURLItem : _UIDocumentPickerContainerItem {

	NSURL* _url;
	long long _cachedType;
	NSString* _cachedTitle;
	NSString* _cachedSubtitle;
	NSString* _cachedSubtitle2;
	NSArray* _cachedTags;
	unsigned long long _cachedIndentation;
	NSString* _cachedSortPath;
	NSString* _cachedContentType;
	NSDate* _cachedContentModifiedDate;
	BOOL _cachedIsAlias;
	id _generationIdentifier;

}
+(id)defaultKeys;
-(id)modificationDate;
-(id)initWithURL:(id)arg1 ;
-(id)subtitle;
-(id)contentType;
-(id)tags;
-(id)title;
-(id)subtitle2;
-(long long)type;
-(unsigned long long)indentationLevel;
-(BOOL)isAlias;
-(id)url;
-(BOOL)renameable;
-(id)urlInLocalContainer;
-(void)_removeCachedValues;
-(id)sortPathComponents;
-(void)_cacheIndentationLevelWithSortPathComponents:(id)arg1 ;
-(void)_modelChanged;
-(id)sortPath;
-(BOOL)attributesModified:(id)arg1 ;
-(void)cacheValues;
@end

