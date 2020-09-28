/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFLock, NSMutableDictionary;

@interface MFWebAttachmentSource : NSObject {

	MFLock* _attachmentsLock;
	NSMutableDictionary* _attachmentsByURL;

}
+(id)_setOfAllSources;
+(id)allSources;
-(void)dealloc;
-(id)init;
-(id)attachmentForURL:(id)arg1 ;
-(BOOL)setAttachment:(id)arg1 forURL:(id)arg2 ;
-(void)removeAttachmentForURL:(id)arg1 ;
-(id)description;
@end
