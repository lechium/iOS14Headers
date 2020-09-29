/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:20 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Message/SMTPAccount.h>

@class CastleIMAPAccount;

@interface MFNewcastleSMTPAccount : SMTPAccount {

	CastleIMAPAccount* _castleAccount;

}

@property (nonatomic,retain) CastleIMAPAccount * castleAccount;              //@synthesize castleAccount=_castleAccount - In the implementation block
+(id)accountTypeIdentifier;
-(id)accountForRenewingCredentials;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg1 ;
-(BOOL)shouldUseAuthentication;
-(id)mailAccountIfAvailable;
-(id)displayHostname;
-(void)setCastleAccount:(CastleIMAPAccount *)arg1 ;
-(CastleIMAPAccount *)castleAccount;
@end
