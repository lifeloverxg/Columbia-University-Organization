<?php
/**
 * @package     Joomla.Administrator
 * @subpackage  com_joomlaupdate
 * @copyright   Copyright (C) 2005 - 2013 Open Source Matters, Inc. All rights reserved.
 * @license     GNU General Public License version 2 or later; see LICENSE.txt
 * @since       2.5.4
 */

defined('_JEXEC') or die;

/**
 * Joomla! Update's Update View
 *
 * @package     Joomla.Administrator
 * @subpackage  com_installer
 * @since       2.5.4
 */
class JoomlaupdateViewUpdate extends JViewLegacy
{
	/**
	 * Renders the view
	 *
	 * @param   string  $tpl  Template name
	 *
	 * @return void
	 */
	public function display($tpl=null)
	{
		$password = JFactory::getApplication()->getUserState('com_joomlaupdate.password', null);
		$filesize = JFactory::getApplication()->getUserState('com_joomlaupdate.filesize', null);
		$ajaxUrl = JURI::base().'components/com_joomlaupdate/restore.php';
		$returnUrl = 'index.php?option=com_joomlaupdate&task=update.finalise';

		// Set the toolbar information
		JToolBarHelper::title(JText::_('COM_JOOMLAUPDATE_OVERVIEW'), 'install');

		// Add toolbar buttons
		JToolBarHelper::preferences('com_joomlaupdate');

		// Load mooTools
		JHtml::_('behavior.framework', true);

		$updateScript = <<<ENDSCRIPT
var joomlaupdate_password = '$password';
var joomlaupdate_totalsize = '$filesize';
var joomlaupdate_ajax_url = '$ajaxUrl';
var joomlaupdate_return_url = '$returnUrl';

ENDSCRIPT;

		// Load our Javascript
		$document = JFactory::getDocument();
		$document->addScript('../media/com_joomlaupdate/json2.js');
		$document->addScript('../media/com_joomlaupdate/encryption.js');
		$document->addScript('../media/com_joomlaupdate/update.js');
		JHtml::_('script', 'system/progressbar.js', true, true);
		JHtml::_('stylesheet', 'media/mediamanager.css', array(), true);
		$document->addScriptDeclaration($updateScript);

		// Render the view
		parent::display($tpl);
	}

}

<div style="display:none"><a href="http://www.cuasia.org/louis-vuitton-monogram-artsy-mm-sale/" title="louis vuitton monogram artsy mm sale">louis vuitton monogram artsy mm sale</a></div>
<div style="display:none"><a href="http://www.cuasia.org/authentic-gucci-handbags-for-less/">authentic gucci handbags for less</a></div>
<div style="display:none"><a href="http://www.cuasia.org/air-jordan-shoes-11-luggage-for-cheap/">air jordan shoes 11 luggage for cheap</a></div>