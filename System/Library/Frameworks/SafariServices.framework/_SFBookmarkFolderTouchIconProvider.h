/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/WBSBookmarkFolderTouchIconProvider.h>

@protocol OS_dispatch_queue;
@class WebBookmarkCollection, NSObject;

@interface _SFBookmarkFolderTouchIconProvider : WBSBookmarkFolderTouchIconProvider {

	WebBookmarkCollection* _collection;
	NSObject*<OS_dispatch_queue> _bookmarkCollectionAccessQueue;

}
-(void)_folderContentsDidChange:(id)arg1 ;
-(id)bookmarkUUIDForRequest:(id)arg1 ;
-(id)backgroundColor;
-(id)init;
-(id)defaultFolderIconForRequest:(id)arg1 ;
-(BOOL)canHandleRequest:(id)arg1 ;
-(id)touchIconRequestForBookmark:(id)arg1 inFolderWithRequest:(id)arg2 ;
-(id)displayableFolderContentsForRequest:(id)arg1 ;
@end

