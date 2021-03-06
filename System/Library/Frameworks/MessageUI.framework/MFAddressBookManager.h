/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@class NSHashTable;

@interface MFAddressBookManager : NSObject {

	void* _addressBook;
	os_unfair_lock_s _lock;
	NSHashTable* _clients;

}
+(BOOL)isAuthorizedToUseAddressBook;
+(id)sharedManager;
-(void)_handleAddressBookChangeNotification;
-(void)_handleAddressBookPrefsChangeNotification;
-(void)dealloc;
-(void)addClient:(id)arg1 ;
-(id)init;
-(void)removeClient:(id)arg1 ;
-(void*)addressBook;
-(id)_clientsArray;
@end

