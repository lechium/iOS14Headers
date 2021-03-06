/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFMessage;

@interface MFMessageBody : NSObject {

	MFMessage* _message;
	BOOL _isEncrypted;

}

@property (nonatomic,readonly) BOOL isEncrypted;              //@synthesize isEncrypted=_isEncrypted - In the implementation block
-(id)rawData;
-(BOOL)isHTML;
-(BOOL)isEncrypted;
-(unsigned)numberOfAttachmentsSigned:(BOOL*)arg1 encrypted:(BOOL*)arg2 ;
-(BOOL)isRich;
-(id)attachmentURLs;
-(void)setMessage:(id)arg1 ;
-(id)textHtmlPart;
-(id)htmlContent;
-(id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL*)arg4 ;
-(id)attachments;
-(id)message;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(BOOL)arg3 ;
@end

