/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNPhotoPickerActionsDelegate <NSObject>
@required
-(void)actionsModel:(id)arg1 didAssignToContact:(id)arg2 atIndexPath:(id)arg3;
-(void)actionsModel:(id)arg1 didEdit:(id)arg2 atIndexPath:(id)arg3;
-(void)actionsModel:(id)arg1 didDelete:(id)arg2 atIndexPath:(id)arg3;
-(void)actionsModel:(id)arg1 didDuplicate:(id)arg2 atIndexPath:(id)arg3 completionBlock:(/*^block*/id)arg4;

@end

