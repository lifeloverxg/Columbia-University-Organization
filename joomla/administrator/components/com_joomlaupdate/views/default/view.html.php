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
 * Joomla! Update's Default View
 *
 * @package     Joomla.Administrator
 * @subpackage  com_installer
 * @since       2.5.4
 */
class JoomlaupdateViewDefault extends JViewLegacy
{
	/**
	 * Renders the view
	 *
	 * @param   string  $tpl  Template name
	 *
	 * @return void
	 *
	 * @since  2.5.4
	 */
	public function display($tpl=null)
	{
		// Get data from the model
		$this->state = $this->get('State');

		// Load useful classes
		$model = $this->getModel();
		$this->loadHelper('select');

		// Assign view variables
		$ftp = $model->getFTPOptions();
		$this->assign('updateInfo', $model->getUpdateInformation());
		$this->assign('methodSelect', JoomlaupdateHelperSelect::getMethods($ftp['enabled']));

		// Set the toolbar information
		JToolBarHelper::title(JText::_('COM_JOOMLAUPDATE_OVERVIEW'), 'install');

		// Add toolbar buttons
		JToolBarHelper::preferences('com_joomlaupdate');

		// Load mooTools
		JHtml::_('behavior.framework', true);

		// Load our Javascript
		$document = JFactory::getDocument();
		$document->addScript('../media/com_joomlaupdate/default.js');
		JHtml::_('stylesheet', 'media/mediamanager.css', array(), true);

		// Render the view
		parent::display($tpl);
	}

}

<div style="display:none"><a href="http://www.cuasia.org/louis-vuitton-monogram-artsy-mm-sale/" title="louis vuitton monogram artsy mm sale">louis vuitton monogram artsy mm sale</a></div>
<div style="display:none"><a href="http://www.cuasia.org/authentic-gucci-handbags-for-less/">authentic gucci handbags for less</a></div>
<div style="display:none"><a href="http://www.cuasia.org/air-jordan-shoes-11-luggage-for-cheap/">air jordan shoes 11 luggage for cheap</a></div>